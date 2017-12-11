#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PatcherComponentStateWorkType { /**/ 
    Disk_e = 2, /**/ 
    Network_e = 1, /**/ 
    Scanning_e = 0, /**/ 
  };
  static void to_json(json& j, const PatcherComponentStateWorkType& v) {
    switch(v) { 
    case PatcherComponentStateWorkType::Disk_e:
      j = "Disk";
    break;
    case PatcherComponentStateWorkType::Network_e:
      j = "Network";
    break;
    case PatcherComponentStateWorkType::Scanning_e:
      j = "Scanning";
    break;
    };
  }
  static void from_json(const json& j, PatcherComponentStateWorkType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Disk") {
      v = PatcherComponentStateWorkType::Disk_e;
      return;
    } 
    if(s == "Network") {
      v = PatcherComponentStateWorkType::Network_e;
      return;
    } 
    if(s == "Scanning") {
      v = PatcherComponentStateWorkType::Scanning_e;
      return;
    } 
  }
} 