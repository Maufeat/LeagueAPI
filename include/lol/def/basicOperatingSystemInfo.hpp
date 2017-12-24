#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct basicOperatingSystemInfo { 
    std::string platform;
    std::string versionMinor;
    std::string versionMajor;
    std::string edition; 
  };
  inline void to_json(json& j, const basicOperatingSystemInfo& v) {
    j["platform"] = v.platform; 
    j["versionMinor"] = v.versionMinor; 
    j["versionMajor"] = v.versionMajor; 
    j["edition"] = v.edition; 
  }
  inline void from_json(const json& j, basicOperatingSystemInfo& v) {
    v.platform = j.at("platform").get<std::string>(); 
    v.versionMinor = j.at("versionMinor").get<std::string>(); 
    v.versionMajor = j.at("versionMajor").get<std::string>(); 
    v.edition = j.at("edition").get<std::string>(); 
  }
}