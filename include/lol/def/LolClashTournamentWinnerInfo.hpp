#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTournamentWinnerInfo { 
    int64_t rosterId;
    std::string shortName;
    int32_t logoColor;
    int64_t averageWinDuration;
    std::string name;
    std::vector<uint64_t> playerIds;
    int64_t createTime;
    int32_t logo;
    int32_t tier; 
  };
  inline void to_json(json& j, const LolClashTournamentWinnerInfo& v) {
    j["rosterId"] = v.rosterId; 
    j["shortName"] = v.shortName; 
    j["logoColor"] = v.logoColor; 
    j["averageWinDuration"] = v.averageWinDuration; 
    j["name"] = v.name; 
    j["playerIds"] = v.playerIds; 
    j["createTime"] = v.createTime; 
    j["logo"] = v.logo; 
    j["tier"] = v.tier; 
  }
  inline void from_json(const json& j, LolClashTournamentWinnerInfo& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.averageWinDuration = j.at("averageWinDuration").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.playerIds = j.at("playerIds").get<std::vector<uint64_t>>(); 
    v.createTime = j.at("createTime").get<int64_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
  }
}