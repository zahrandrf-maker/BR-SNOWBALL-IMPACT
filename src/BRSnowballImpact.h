#pragma once
#include <FFGLSDK.h>
#include <chrono>
#include <string>
#include <vector>
class BRSnowballImpact final:public CFFGLPlugin{
public:BRSnowballImpact();~BRSnowballImpact() override=default;
 FFResult InitGL(const FFGLViewportStruct*) override;FFResult ProcessOpenGL(ProcessOpenGLStruct*) override;FFResult DeInitGL() override;
 FFResult SetFloatParameter(unsigned int,float) override;float GetFloatParameter(unsigned int) override;
 FFResult SetTextParameter(unsigned int,const char*) override;char* GetTextParameter(unsigned int) override;
private:void option(unsigned,unsigned,const char*,float);std::vector<float> v_;const std::string credit_="Effect by Belajar Resolume";
 unsigned w_=1920,h_=1080;std::chrono::steady_clock::time_point last_;double clock_=0,throwAt_=-100,pauseAt_=0;bool paused_=false,ended_=false;
 ffglex::FFGLShader shader_;ffglex::FFGLScreenQuad quad_;};
