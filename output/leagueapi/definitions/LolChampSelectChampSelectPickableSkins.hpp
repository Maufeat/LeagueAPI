#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectChampSelectPickableSkins { /**/ 
    std::vector<int32_t> skinIds;/**/
  };
  static void to_json(json& j, const LolChampSelectChampSelectPickableSkins& v) { 
    j["skinIds"] = v.skinIds;
  }
  static void from_json(const json& j, LolChampSelectChampSelectPickableSkins& v) { 
    v.skinIds = j.at("skinIds").get<std::vector<int32_t>>(); 
  }
} 