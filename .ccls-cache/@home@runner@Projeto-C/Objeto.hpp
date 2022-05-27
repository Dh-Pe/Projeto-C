class Carro {
  private:
  float altura, peso, largura;

  public:
  void setAltura(float alt) {
    altura = alt;
  }
  float getAltura() {
    return altura;
  }

  void setPeso(float p) {
    peso = p;
  }
  float getPeso() {
    return peso;
  }

  void setLargura(float lar) {
    largura = lar;
  }

  float getLargura() {
    return largura;
  }
};