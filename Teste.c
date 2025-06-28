#include "minunit-master/minunit.h"
#include "Calculo.h"

MU_TEST(teste_quantidadeNegativa) {
	double calculo;
    calculo = calcularIngresso(-2, 2);
    mu_assert_double_eq(-100,calculo);
}

MU_TEST(teste_quantidadePositivaInvalida) 
{
	double calculo;
    calculo = calcularIngresso(8, -90);
    mu_assert_double_eq(-100,calculo);
}
MU_TEST(teste_idadeNegativa) {
	double calculo;
    calculo = calcularIngresso(4, -90);
    mu_assert_double_eq(-100,calculo);
}

MU_TEST(teste_quantidadeIdadeNegativas)
 {
	double calculo;
    calculo = calcularIngresso(-8, -10);
    mu_assert_double_eq(-100,calculo);
}

MU_TEST(teste_qauntidadeIdadeCertos)
 {
	double calculo;
    calculo = calcularIngresso(2, 15);
    mu_assert_double_eq(60,calculo);
}

MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(teste_quantidadeNegativa);
    MU_RUN_TEST(teste_quantidadePositivaInvalida);
    MU_RUN_TEST(teste_idadeNegativa);
    MU_RUN_TEST(teste_quantidadeIdadeNegativas);
    MU_RUN_TEST(teste_qauntidadeIdadeCertos);

}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}