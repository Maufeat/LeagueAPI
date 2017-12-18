#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PatcherComponentStateWorkType {  
    Disk_e = 2,
    Network_e = 1,
    Scanning_e = 0,
  };
  inline void to_json(json& j, const PatcherComponentStateWorkType& v) {
    if(v == PatcherComponentStateWorkType::Disk_e) {
      j = "Disk";
      return;
    }
    if(v == PatcherComponentStateWorkType::Network_e) {
      j = "Network";
      return;
    }
    if(v == PatcherComponentStateWorkType::Scanning_e) {
      j = "Scanning";
      return;
    }
  }
  inline void from_json(const json& j, PatcherComponentStateWorkType& v) {
    if(j.get<std::string>() == "Disk") {
      v = PatcherComponentStateWorkType::Disk_e;
      return;
    } 
    if(j.get<std::string>() == "Network") {
      v = PatcherComponentStateWorkType::Network_e;
      return;
    } 
    if(j.get<std::string>() == "Scanning") {
      v = PatcherComponentStateWorkType::Scanning_e;
      return;
    } 
  }
}