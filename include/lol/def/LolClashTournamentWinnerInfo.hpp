#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentWinnerInfo { 
    std::string name;
    int32_t logo;
    std::vector<uint64_t> playerIds;
    std::string shortName;
    int64_t averageWinDuration;
    int32_t tier;
    int64_t rosterId;
    int64_t createTime;
    int32_t logoColor; 
  };
  inline void to_json(json& j, const LolClashTournamentWinnerInfo& v) {
    j["name"] = v.name; 
    j["logo"] = v.logo; 
    j["playerIds"] = v.playerIds; 
    j["shortName"] = v.shortName; 
    j["averageWinDuration"] = v.averageWinDuration; 
    j["tier"] = v.tier; 
    j["rosterId"] = v.rosterId; 
    j["createTime"] = v.createTime; 
    j["logoColor"] = v.logoColor; 
  }
  inline void from_json(const json& j, LolClashTournamentWinnerInfo& v) {
    v.name = j.at("name").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.createTime = j.at("createTime").get<int64_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
  }
}