#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashTournamentWinnerInfo { /**/ 
    int64_t createTime;/**/
    int64_t averageWinDuration;/**/
    int64_t rosterId;/**/
    std::string shortName;/**/
    std::vector<uint64_t> playerIds;/**/
    std::string name;/**/
    int32_t logoColor;/**/
    int32_t tier;/**/
    int32_t logo;/**/
  };
  static void to_json(json& j, const LolClashTournamentWinnerInfo& v) { 
    j["createTime"] = v.createTime;
    j["averageWinDuration"] = v.averageWinDuration;
    j["rosterId"] = v.rosterId;
    j["shortName"] = v.shortName;
    j["playerIds"] = v.playerIds;
    j["name"] = v.name;
    j["logoColor"] = v.logoColor;
    j["tier"] = v.tier;
    j["logo"] = v.logo;
  }
  static void from_json(const json& j, LolClashTournamentWinnerInfo& v) { 
    v.createTime = j.at("createTime").get<int64_t>(); 
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
  }
} 