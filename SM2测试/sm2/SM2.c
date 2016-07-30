/*
  email: co63 at 163.com
  date: 2012-09-26
*/

#include "sm2.h"
#include "part1.h"
#include "part2.h"
#include "part3.h"
#include "part4.h"

/*
  ∑÷Œ™«˙œﬂ—È÷§£¨ ˝◊÷«©√˚£¨√‹‘øΩªªª£¨º”Ω‚√‹

  ∞¸¿® SM2Õ÷‘≤«˙œﬂπ´‘ø√‹¬ÎÀ„∑® Œƒµµ…œÀ˘”– æ¿˝º∆À„£¨
  ÷ª‘⁄f2m_257 √‹‘øΩªªª º∆À„”√ªß‘”¥’÷µZ ±≤ª“ª÷¬

  ecp->point_byte_length±Ì æ≤ªÕ¨«˙œﬂ π”√µƒ∂˛Ω¯÷∆Œª ˝

  DEFINE_SHOW_BIGNUM, 16Ω¯÷∆œ‘ æ¥Û’˚ ˝µƒ÷µ
  DEFINE_SHOW_STRING£¨16Ω¯÷∆œ‘ æ∂˛Ω¯÷∆◊÷∑˚¥Æ
*/
int mainSM2(int argc, char* argv[])
{
	{
		//«˙œﬂ—È÷§
		printf("********************part1********************\n");
		test_part1(sm2_param_fp_192, TYPE_GFp, 192);
		test_part1(sm2_param_fp_256, TYPE_GFp, 256);
		test_part1(sm2_param_f2m_193, TYPE_GF2m, 193);
		test_part1(sm2_param_f2m_257, TYPE_GF2m, 257);

		// ˝◊÷«©√˚
		printf("********************part2********************\n");
		test_part2(sm2_param_fp_256, TYPE_GFp, 256);
		test_part2(sm2_param_f2m_257, TYPE_GF2m, 257);

		//√‹‘øΩªªª
		printf("********************part3********************\n");
		test_part3(sm2_param_fp_256, TYPE_GFp, 256);
		//a = 0 ±£¨”√ªßhash Zº∆À„≤ª“ª÷¬, µ´…˙≥…√‹‘øœ‡Õ¨
		test_part3(sm2_param_f2m_257, TYPE_GF2m, 257);
	
		//º”Ω‚√‹
		//192, 193Œª÷– π”√µƒd, k±ªΩÿ∂œ¥¶¿Ì
		printf("********************part4********************\n");
		test_part4(sm2_param_fp_192, TYPE_GFp, 192);
		test_part4(sm2_param_fp_256, TYPE_GFp, 256);
		test_part4(sm2_param_f2m_193, TYPE_GF2m, 193);
		test_part4(sm2_param_f2m_257, TYPE_GF2m, 257);
	}

	//Õ∆ºˆ≤Œ ˝
	//test_part1(sm2_param_recommand, TYPE_GFp, 256);
	//test_part2(sm2_param_recommand, TYPE_GFp, 256);
	//test_part3(sm2_param_recommand, TYPE_GFp, 256);
	//test_part4(sm2_param_recommand, TYPE_GFp, 256);

	system("pause");
	return 0;
}