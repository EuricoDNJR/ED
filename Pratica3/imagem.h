#ifndef imagem_h
#define imagem_h

//STRUCTS
typedef struct pixel Pixel;
typedef struct imagem Imagem;

//LER STRING
char *ler_string_imagem();

//PIXEL
Pixel criar_pixel();
void definir_valor_pixel( Pixel *p, int valor );
int valor_pixel( Pixel *p );
void alterar_pixel( Pixel *p, int valor );
Pixel *pixel_do_indice(Imagem *i, int j, int k);

//GET IMAGEM
int altura_imagem( Imagem *i );
int largura_imagem( Imagem *i );

//IMAGEM
Imagem *declarar_imagem(int largura, int altura);
Imagem *criar_imagem(); 
Imagem *criar_imagem_com_valores();//(em tempo de execução), 
Imagem *carregar_imagem( const char *nome ); //(de um arquivo txt), 
void salvar_imagem( Imagem *i, const char *nome ); //(em arquivo txt), 
Imagem *criar_copia_imagem( Imagem *i ); //(em tempo de execução), 
void mostrar_imagem( Imagem *i );
void liberar_imagem( Imagem *i );

//MENU
void menu_imagem( Imagem **im, Imagem **im_copia );


#endif
