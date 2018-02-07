#pragma once
#include "../base_def.hpp" 
#include "PlayerMissionRewardDTO.hpp"
#include "MissionAlertDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
namespace lol {
  struct PlayerMissionDTO { 
    std::string id;
    std::string title;
    std::string helperText;
    std::string description;
    std::string backgroundImageUrl;
    std::string iconImageUrl;
    std::string seriesName;
    std::string locale;
    int64_t startTime;
    int64_t endTime;
    int64_t lastUpdatedTimestamp;
    std::vector<PlayerMissionObjectiveDTO> objectives;
    std::vector<PlayerMissionRewardDTO> rewards;
    std::vector<MissionAlertDTO> expiringWarnings;
    std::vector<std::string> requirements;
    std::string completionExpression;
    bool viewed;
    bool isNew;
    std::string status;
    std::string missionType;
    std::string displayType;
    int64_t completedDate;
    int64_t cooldownTimeMillis;
    std::string celebrationType;
    std::string clientNotifyLevel;
    std::string internalName; 
  };
  inline void to_json(json& j, const PlayerMissionDTO& v) {
    j["id"] = v.id; 
    j["title"] = v.title; 
    j["helperText"] = v.helperText; 
    j["description"] = v.description; 
    j["backgroundImageUrl"] = v.backgroundImageUrl; 
    j["iconImageUrl"] = v.iconImageUrl; 
    j["seriesName"] = v.seriesName; 
    j["locale"] = v.locale; 
    j["startTime"] = v.startTime; 
    j["endTime"] = v.endTime; 
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp; 
    j["objectives"] = v.objectives; 
    j["rewards"] = v.rewards; 
    j["expiringWarnings"] = v.expiringWarnings; 
    j["requirements"] = v.requirements; 
    j["completionExpression"] = v.completionExpression; 
    j["viewed"] = v.viewed; 
    j["isNew"] = v.isNew; 
    j["status"] = v.status; 
    j["missionType"] = v.missionType; 
    j["displayType"] = v.displayType; 
    j["completedDate"] = v.completedDate; 
    j["cooldownTimeMillis"] = v.cooldownTimeMillis; 
    j["celebrationType"] = v.celebrationType; 
    j["clientNotifyLevel"] = v.clientNotifyLevel; 
    j["internalName"] = v.internalName; 
  }
  inline void from_json(const json& j, PlayerMissionDTO& v) {
    v.id = j.at("id").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.helperText = j.at("helperText").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>(); 
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>(); 
    v.seriesName = j.at("seriesName").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.startTime = j.at("startTime").get<int64_t>(); 
    v.endTime = j.at("endTime").get<int64_t>(); 
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>(); 
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO>>(); 
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO>>(); 
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO>>(); 
    v.requirements = j.at("requirements").get<std::vector<std::string>>(); 
    v.completionExpression = j.at("completionExpression").get<std::string>(); 
    v.viewed = j.at("viewed").get<bool>(); 
    v.isNew = j.at("isNew").get<bool>(); 
    v.status = j.at("status").get<std::string>(); 
    v.missionType = j.at("missionType").get<std::string>(); 
    v.displayType = j.at("displayType").get<std::string>(); 
    v.completedDate = j.at("completedDate").get<int64_t>(); 
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>(); 
    v.celebrationType = j.at("celebrationType").get<std::string>(); 
    v.clientNotifyLevel = j.at("clientNotifyLevel").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
  }
}