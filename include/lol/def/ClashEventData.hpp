#pragma once
#include "../base_def.hpp" 
#include "ClashRewardSpec.hpp"
namespace lol {
  struct ClashEventData { 
    std::string earnedDate;
    std::string rewardType;
    int64_t tournamentId;
    std::string tournamentName;
    std::string tier;
    int32_t bracket;
    int32_t seasonId;
    std::string theme;
    std::string teamName;
    std::string teamLogoName;
    std::string teamLogoChromaId;
    std::vector<std::string> playerUUIDs;
    ClashRewardSpec rewardSpec; 
  };
  inline void to_json(json& j, const ClashEventData& v) {
    j["earnedDate"] = v.earnedDate; 
    j["rewardType"] = v.rewardType; 
    j["tournamentId"] = v.tournamentId; 
    j["tournamentName"] = v.tournamentName; 
    j["tier"] = v.tier; 
    j["bracket"] = v.bracket; 
    j["seasonId"] = v.seasonId; 
    j["theme"] = v.theme; 
    j["teamName"] = v.teamName; 
    j["teamLogoName"] = v.teamLogoName; 
    j["teamLogoChromaId"] = v.teamLogoChromaId; 
    j["playerUUIDs"] = v.playerUUIDs; 
    j["rewardSpec"] = v.rewardSpec; 
  }
  inline void from_json(const json& j, ClashEventData& v) {
    v.earnedDate = j.at("earnedDate").get<std::string>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.tournamentName = j.at("tournamentName").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.bracket = j.at("bracket").get<int32_t>(); 
    v.seasonId = j.at("seasonId").get<int32_t>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.teamName = j.at("teamName").get<std::string>(); 
    v.teamLogoName = j.at("teamLogoName").get<std::string>(); 
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>(); 
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>(); 
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
  }
}