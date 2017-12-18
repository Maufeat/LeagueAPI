#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsWardSkin { 
    LolMissionsCollectionsOwnership ownership;
    int64_t id; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsWardSkin& v) {
    j["ownership"] = v.ownership; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsWardSkin& v) {
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}