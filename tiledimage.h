#include <vector>

#include "image.h"

template<typename T>
class Tile
{
  public:

  T *data;
  rectangle roi;
};

template<typename T>
class TiledImage : public Image<T>
{
  std::vector< Tile<T> > *tiles;
  int tile_width, tile_height;

  public:
    TiledImage (int w, int h, int tile_width, int tile_height);
    ~TiledImage ();

    void get (T *buf, rectangle r);
    void set (T *buf, rectangle r);
};