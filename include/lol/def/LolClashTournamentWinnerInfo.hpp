#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentWinnerInfo { 
    int64_t rosterId;
    int32_t tier;
    std::string shortName;
    std::string name;
    int32_t logo;
    int32_t logoColor;
    int64_t createTime;
    int64_t averageWinDuration;
    std::vector<uint64_t> playerIds; 
  };
  inline void to_json(json& j, const LolClashTournamentWinnerInfo& v) {
    j["rosterId"] = v.rosterId; 
    j["tier"] = v.tier; 
    j["shortName"] = v.shortName; 
    j["name"] = v.name; 
    j["logo"] = v.logo; 
    j["logoColor"] = v.logoColor; 
    j["createTime"] = v.createTime; 
    j["averageWinDuration"] = v.averageWinDuration; 
    j["playerIds"] = v.playerIds; 
  }
  inline void from_json(const json& j, LolClashTournamentWinnerInfo& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.createTime = j.at("createTime").get<int64_t>(); 
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>(); 
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>(); 
  }
}