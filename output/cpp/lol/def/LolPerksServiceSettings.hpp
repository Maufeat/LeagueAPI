#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksServiceSettings { 
    bool serverSideStorageAvailable; 
  };
  void to_json(json& j, const LolPerksServiceSettings& v) {
  j["serverSideStorageAvailable"] = v.serverSideStorageAvailable; 
  }
  void from_json(const json& j, LolPerksServiceSettings& v) {
  v.serverSideStorageAvailable = j.at("serverSideStorageAvailable").get<bool>(); 
  }
}