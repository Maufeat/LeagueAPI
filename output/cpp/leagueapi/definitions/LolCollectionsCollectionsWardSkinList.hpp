#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsWardSkinList { /**/ 
    std::vector<int64_t> wardSkinList;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsWardSkinList& v) { 
    j["wardSkinList"] = v.wardSkinList;
  }
  static void from_json(const json& j, LolCollectionsCollectionsWardSkinList& v) { 
    v.wardSkinList = j.at("wardSkinList").get<std::vector<int64_t>>(); 
  }
} 