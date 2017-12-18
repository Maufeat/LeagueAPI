#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct basicOperatingSystemInfo { 
    std::string versionMinor;
    std::string versionMajor;
    std::string platform;
    std::string edition; 
  };
  inline void to_json(json& j, const basicOperatingSystemInfo& v) {
    j["versionMinor"] = v.versionMinor; 
    j["versionMajor"] = v.versionMajor; 
    j["platform"] = v.platform; 
    j["edition"] = v.edition; 
  }
  inline void from_json(const json& j, basicOperatingSystemInfo& v) {
    v.versionMinor = j.at("versionMinor").get<std::string>(); 
    v.versionMajor = j.at("versionMajor").get<std::string>(); 
    v.platform = j.at("platform").get<std::string>(); 
    v.edition = j.at("edition").get<std::string>(); 
  }
}