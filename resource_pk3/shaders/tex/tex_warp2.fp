uniform float timer;
uniform sampler2D tex;

vec4 gettexel()
{
	vec2 texCoord = gl_TexCoord[0].st;

	const float pi = 3.14159265358979323846;

	texCoord.x += sin(pi * 128.0 * (texCoord.y * 0.1) + timer * 10.0) * 0.01;
	texCoord.y += sin(pi * 128.0 * (texCoord.x * 0.1) + timer * 10.0) * 0.01;

	return texture2D(tex, texCoord);
}