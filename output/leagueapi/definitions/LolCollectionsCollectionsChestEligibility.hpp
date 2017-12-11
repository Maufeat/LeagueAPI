#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsChestEligibility { /**/ 
    uint32_t maximumChests;/**/
    uint64_t nextChestRechargeTime;/**/
    uint32_t earnableChests;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsChestEligibility& v) { 
    j["maximumChests"] = v.maximumChests;
    j["nextChestRechargeTime"] = v.nextChestRechargeTime;
    j["earnableChests"] = v.earnableChests;
  }
  static void from_json(const json& j, LolCollectionsCollectionsChestEligibility& v) { 
    v.maximumChests = j.at("maximumChests").get<uint32_t>(); 
    v.nextChestRechargeTime = j.at("nextChestRechargeTime").get<uint64_t>(); 
    v.earnableChests = j.at("earnableChests").get<uint32_t>(); 
  }
} 