//Auto-generated by fwrap.py. Do not edit manually
const char* psz_hlsl_opcode_funcs_glsl = {
"	\n \
	void HLSL_ge(out vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(greaterThanEqual(a, b));\n \
	}\n \
	\n \
	void HLSL_ge(out float dest, float a, float b) {\n \
	    dest = (a >= b) ? 1.0 : 0.0;\n \
	}\n \
	\n \
	void HLSL_ige(out vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(greaterThanEqual(a, b));\n \
	}\n \
	\n \
	void HLSL_ige(out float dest, float a, float b) {\n \
	    dest = (a >= b) ? 1.0 : 0.0;\n \
	}\n \
	\n \
	void HLSL_lt(out vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(lessThan(a, b));\n \
	}\n \
	\n \
	void HLSL_lt(out vec3 dest, vec4 a, vec4 b) {\n \
	    dest = vec3(lessThan(a, b));\n \
	}\n \
	\n \
	void HLSL_lt(out float dest, float a, float b) {\n \
	    dest = (a < b) ? 1.0 : 0.0;\n \
	}\n \
	\n \
	void HLSL_ieq(out vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(equal(a, b));\n \
	}\n \
	\n \
	void HLSL_ieq(out float dest, float a, float b) {\n \
	    dest = (a == b) ? 1.0 : 0.0;\n \
	}\n \
	\n \
	void HLSL_eq(out vec4 dest, vec4 a, vec4 b) {\n \
	    dest = vec4(equal(a, b));\n \
	}\n \
	\n \
	void HLSL_eq(out float dest, float a, float b) {\n \
	    dest = (a == b) ? 1.0 : 0.0;\n \
	}\n \
	\n \
	#if __VERSION__ != 120 && __VERSION__ != 100\n \
	void HLSL_and(out vec4 dest, vec4 a, vec4 b) {\n \
		ivec4 ia = ivec4(a);\n \
		ivec4 ib = ivec4(b);\n \
		dest = vec4(ia & ib);\n \
	}\n \
	void HLSL_and(out float dest, float a, float b) {\n \
		int ia = int(a);\n \
		int ib = int(b);\n \
		dest = float(ia & ib);\n \
	}\n \
	#endif\n \
	\n \
	void HLSL_ilt(out vec4 dest, vec4 a, vec4 b) {\n \
		ivec4 ia = ivec4(a);\n \
		ivec4 ib = ivec4(b);\n \
	   dest = vec4(lessThan(ia, ib));\n \
	}\n \
	\n \
	void HLSL_ilt(out float dest, float a, float b) {\n \
		int ia = int(a);\n \
		int ib = int(b);\n \
	    dest = (ia < ib) ? 1.0 : 0.0;\n \
	}\n \
	\n \
"};
