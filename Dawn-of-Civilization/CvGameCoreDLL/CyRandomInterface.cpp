#include "CvGameCoreDLL.h"
#include "CvRandom.h"
# include <boost/python/overloads.hpp>
using namespace boost::python;

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(CvRandom_get_overloads, CvRandom::get, 2, 2)
//mediv01 CYϵ����Ҫ�ǽӿں������Խ�CV�е���Ϸ�߼� 202000822
//
// published python interface for CvRandom
//
void CyRandomPythonInterface()
{
	OutputDebugString("Python Extension Module - CyRandomPythonInterface\n");

	python::class_<CvRandom>("CyRandom")
		.def("get", &CvRandom::get, CvRandom_get_overloads( args("usNum", "pszLog"), "returns a random number"))
		.def("init", &CvRandom::init, "void (unsigned long int ulSeed)")
		;
}