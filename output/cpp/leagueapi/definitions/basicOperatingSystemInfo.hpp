#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct basicOperatingSystemInfo { /*User Experience Settings Operating System Information*/ 
    std::string versionMinor;/**/
    std::string versionMajor;/**/
    std::string platform;/**/
    std::string edition;/**/
  };
  static void to_json(json& j, const basicOperatingSystemInfo& v) { 
    j["versionMinor"] = v.versionMinor;
    j["versionMajor"] = v.versionMajor;
    j["platform"] = v.platform;
    j["edition"] = v.edition;
  }
  static void from_json(const json& j, basicOperatingSystemInfo& v) { 
    v.versionMinor = j.at("versionMinor").get<std::string>(); 
    v.versionMajor = j.at("versionMajor").get<std::string>(); 
    v.platform = j.at("platform").get<std::string>(); 
    v.edition = j.at("edition").get<std::string>(); 
  }
} 