#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksServiceSettings { 
    bool serverSideStorageAvailable; 
  };
  inline void to_json(json& j, const LolPerksServiceSettings& v) {
    j["serverSideStorageAvailable"] = v.serverSideStorageAvailable; 
  }
  inline void from_json(const json& j, LolPerksServiceSettings& v) {
    v.serverSideStorageAvailable = j.at("serverSideStorageAvailable").get<bool>(); 
  }
}