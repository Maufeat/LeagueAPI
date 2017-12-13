#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardSpec.hpp>
namespace lol {
  struct ClashEventData { 
    std::string teamLogoName;
    std::vector<std::string> playerUUIDs;
    int32_t bracket;
    std::string tier;
    std::string theme;
    ClashRewardSpec rewardSpec;
    std::string earnedDate;
    std::string rewardType;
    int32_t seasonId;
    int64_t tournamentId;
    std::string teamLogoChromaId;
    std::string teamName;
    std::string tournamentName; 
  };
  void to_json(json& j, const ClashEventData& v) {
  j["teamLogoName"] = v.teamLogoName; 
  j["playerUUIDs"] = v.playerUUIDs; 
  j["bracket"] = v.bracket; 
  j["tier"] = v.tier; 
  j["theme"] = v.theme; 
  j["rewardSpec"] = v.rewardSpec; 
  j["earnedDate"] = v.earnedDate; 
  j["rewardType"] = v.rewardType; 
  j["seasonId"] = v.seasonId; 
  j["tournamentId"] = v.tournamentId; 
  j["teamLogoChromaId"] = v.teamLogoChromaId; 
  j["teamName"] = v.teamName; 
  j["tournamentName"] = v.tournamentName; 
  }
  void from_json(const json& j, ClashEventData& v) {
  v.teamLogoName = j.at("teamLogoName").get<std::string>(); 
  v.playerUUIDs = j.at("playerUUIDs").get<std::vector<std::string>>(); 
  v.bracket = j.at("bracket").get<int32_t>(); 
  v.tier = j.at("tier").get<std::string>(); 
  v.theme = j.at("theme").get<std::string>(); 
  v.rewardSpec = j.at("rewardSpec").get<ClashRewardSpec>(); 
  v.earnedDate = j.at("earnedDate").get<std::string>(); 
  v.rewardType = j.at("rewardType").get<std::string>(); 
  v.seasonId = j.at("seasonId").get<int32_t>(); 
  v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  v.teamLogoChromaId = j.at("teamLogoChromaId").get<std::string>(); 
  v.teamName = j.at("teamName").get<std::string>(); 
  v.tournamentName = j.at("tournamentName").get<std::string>(); 
  }
}