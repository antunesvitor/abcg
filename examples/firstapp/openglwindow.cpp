#include "openglwindow.hpp"

#include <fmt/core.h>

#include "imgui.h"

void OpenGLWindow::initializeGL() {
  auto windowSettings{getWindowSettings()};
  fmt::print("Initial window size: {}x{}\n", windowSettings.width,
             windowSettings.height);
}

void OpenGLWindow::paintGL() {
  // set the clear color
  glClearColor(m_clearColor[0], m_clearColor[1], m_clearColor[2],
               m_clearColor[3]);

  // clear the color buffer
  glClear(GL_COLOR_BUFFER_BIT);
}

void OpenGLWindow::paintUI() {
  // Parent class will show fullscreen button and FPS meter
  //abcg::OpenGLWindow::paintUI();
  auto windowSettings{getWindowSettings()};
  //int width = windowSettings.width;
  int height = windowSettings.height;

  //int larguraBotao = width/4;
  int alturaBotao  = height/4;
  
  //std::printf("%d %d\n",larguraBotao, alturaBotao);

  {
    ImGui::Columns(3, NULL, true);
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::NextColumn();
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Spacing();
    ImGui::NextColumn();
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
    ImGui::Button("",ImVec2(alturaBotao,alturaBotao));
  }
}