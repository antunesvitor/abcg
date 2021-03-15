#include <fmt/core.h>
#include "abcg.hpp"
#include "openglwindow.hpp"

int main(int argc, char **argv) {
  try {
    abcg::Application app(argc, argv);

    auto window{std::make_unique<OpenGLWindow>()};
    window->setWindowSettings({.title = "First App"});

    app.run(window);
  }
  catch(abcg::Exception &exception){
    fmt::print(stderr,"{}\n", exception.what());
    return -1;
  }

  return 0;
}