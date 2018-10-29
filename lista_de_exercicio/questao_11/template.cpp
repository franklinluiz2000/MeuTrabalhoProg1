
template <typename T>
ostream& operator<<(ostream& ostr, T const &x)
{
     x.print(ostr);
     return ostr;

}

/*  As templates permitem especificar uma serie de funções relacionadas (sobrecargas) a sobre "carga de operador" deveria esta ligada a uma classe para assim permitir que outras classes tenham acesso aos seus atributos privados ou publicos nesse caso a template não iria funcioinar já que "x" já teria sido instacioado antes com um configuração especifica. */
