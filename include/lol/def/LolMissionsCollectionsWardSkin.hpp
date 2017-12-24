#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsWardSkin { 
    int64_t id;
    LolMissionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsWardSkin& v) {
    j["id"] = v.id; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsWardSkin& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  }
}