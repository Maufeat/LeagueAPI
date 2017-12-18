#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentWinnerInfo { 
    int32_t logoColor;
    int64_t averageWinDuration;
    int32_t logo;
    int32_t tier;
    int64_t rosterId;
    std::vector<uint64_t> playerIds;
    std::string name;
    std::string shortName;
    int64_t createTime; 
  };
  inline void to_json(json& j, const LolClashTournamentWinnerInfo& v) {
    j["logoColor"] = v.logoColor; 
    j["averageWinDuration"] = v.averageWinDuration; 
    j["logo"] = v.logo; 
    j["tier"] = v.tier; 
    j["rosterId"] = v.rosterId; 
    j["playerIds"] = v.playerIds; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["createTime"] = v.createTime; 
  }
  inline void from_json(const json& j, LolClashTournamentWinnerInfo& v) {
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.createTime = j.at("createTime").get<int64_t>(); 
  }
}