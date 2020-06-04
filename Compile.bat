@echo off


:Init

set FileName=invuled-los
set ResFileName=invuled-los-res

set Compression=9

set Path_BCS=Compiler
set Path_Script=..\pk3\ACS\TEHACS
set Path_7z=..\Compiler\7za
set Path_Backwards=..

set GotoBCS=Compile_Main
set GotoCompileMain=Compile_Res


if "%PROCESSOR_ARCHITECTURE%" == "AMD64" ( 
	set Path_BCS=Compiler\x64
	set Path_7z=..\Compiler\x64\7za
	set Path_Backwards=..\..\
	set Path_Script=..\..\pk3\ACS\TEHACS
)

echo CPU: "%PROCESSOR_ARCHITECTURE%"
echo.
echo Please choose a compile option.
echo Note: All options will compile BCS scripts.
echo.
echo      Full Compression (slow):
echo           1: Compile Everything
echo           2: Compile Main PK3
echo           3: Compile Resource PK3 (For map making and contributors)
echo.
echo      No Compression (fast):
echo           4: Compile Everything
echo           5: Compile Main PK3
echo           6: Compile Resource PK3 (For map making and contributors)
echo.
echo      BCS:
echo           7: Compile only BCS scripts.
echo.
Choice /c 1234567 /N /M Choose:



If ERRORLEVEL 7 goto Compile_BCS_Only

If ERRORLEVEL 6 goto None_Compile_Res
If ERRORLEVEL 5 goto None_Compile_Main_Only
If ERRORLEVEL 4 goto None_Compile_BCS

If ERRORLEVEL 3 goto Compile_Res_only
If ERRORLEVEL 2 goto Compile_Main_Only
If ERRORLEVEL 1 goto Compile_BCS



:Compile_BCS_Only
	set GotoBCS=Finish
	goto Compile_BCS





:None_Compile_Main_Only
	set Compression=0
:Compile_Main_Only
	set GotoCompileMain=Replace
	goto Compile_BCS



:None_Compile_Res
	set Compression=0
:Compile_Res_Only
	set GotoBCS=Compile_Res
	goto Compile_BCS





:None_Compile_BCS
	set Compression=0
:Compile_BCS
echo BCS
	cd %Path_BCS%
	bcc -acc-err-file -x bcs %Path_Script%.c %Path_Script%.o
	
	goto %GotoBCS%




:Compile_Main
echo PACK GAME FILES
	cd %Path_Backwards%
	cd pk3
	%Path_7z% a -r -ssw -mx%Compression% -tzip  ..\%FileName%n.pk3 *
	cd ..
	del %FileName%.pk3
	ren %FileName%n.pk3 %FileName%.pk3
	cd pk3\acs
	goto %GotoCompileMain%



:Compile_Res
echo PACK Resource PK3 MISC. FILES
	cd %Path_Backwards%
	cd resource_pk3
	%Path_7z% a -r -ssw -mx%Compression% -tzip  ..\%ResFileName%n.pk3 *
	cd ..
	del %ResFileName%.pk3
	ren %ResFileName%n.pk3 %ResFileName%.pk3
	goto Finish









:Error1
echo Error: Could not determain CPU type, please check that your system's environment variables are accurate.
goto Finish

:Error2
echo BCS Error: 
goto Init

:Finish
pause
