#pragma once


#ifdef TP_STATIC
	#define TP_CORE
#elif defined(TP_SHARED)
	#ifdef TP_WINDOWS
		#ifdef TP_BUILD_LIB
			#define TP_CORE __declspec(dllexport)
		#else
			#define TP_CORE __declspec(dllimport)
		#endif
	#else
		#define TP_CORE
	#endif
#else
	#error You must define either 'TP_STATIC' or 'TP_SHARED'
#endif