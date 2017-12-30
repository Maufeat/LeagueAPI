#pragma once
#include "../base_def.hpp" 
#include "ClashRewardSpec.hpp"
namespace lol {
  struct ClashEventData { 
    int64_t tournamentId;
    std::string rewardType;
    std::string teamName;
    std::vector<std::string> playerUUIDs;
    std::string earnedDate;
    std::string tier;
    int32_t bracket;
    std::string theme;
    std::string teamLogoName;
    ClashRewardSpec rewardSpec;
    int32_t seasonId;
    std::string teamLogoChromaId;
    std::string tournamentName; 
  };
  inline void to_json(json& j, const ClashEventData& v) {
    j["tournamentId"] = v.tournamentId; 
    j["rewardType"] = v.rewardType; 
    j["teamName"] = v.teamName; 
    j["playerUUIDs"] = v.playerUUIDs; 
    j["earnedDate"] = v.earnedDate; 
    j["tier"] = v.tier; 
    j["bracket"] = v.bracket; 
    j["theme"] = v.theme; 
    j["teamLogoName"] = v.teamLogoName; 
    j["rewardSpec"] = v.rewardSpec; 
    j["seasonId"] = v.seasonId; 
    j["teamLogoChromaId"] = v.teamLogoChromaId; 
    j["tournamentName"] = v.tournamentName; 
  }
  inline void from_json(const json& j, ClashEventData& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.teamName = j.at("teamName").get<std::string>(); 
    v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>(); 
    v.earnedDate = j.at("earnedDate").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.bracket = j.at("bracket").get<int32_t>(); 
    v.theme = j.at("theme").get<std::string>(); 
    v.teamLogoName = j.at("teamLogoName").get<std::string>(); 
    v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
    v.seasonId = j.at("seasonId").get<int32_t>(); 
    v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>(); 
    v.tournamentName = j.at("tournamentName").get<std::string>(); 
  }
}