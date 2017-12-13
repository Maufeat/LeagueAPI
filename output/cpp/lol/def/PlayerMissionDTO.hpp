#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MissionRequirementDTO.hpp>
#include <lol/def/MissionAlertDTO.hpp>
#include <lol/def/PlayerMissionRewardDTO.hpp>
#include <lol/def/PlayerMissionObjectiveDTO.hpp>
namespace lol {
  struct PlayerMissionDTO { 
    std::string helperText;
    int64_t endTime;
    std::string locale;
    int64_t completedDate;
    std::string id;
    std::string seriesName;
    int64_t cooldownTimeMillis;
    std::string status;
    std::string completionExpression;
    std::vector<MissionAlertDTO> expiringWarnings;
    std::string celebrationType;
    int64_t startTime;
    std::string title;
    std::string missionType;
    int64_t lastUpdatedTimestamp;
    std::string iconImageUrl;
    std::vector<PlayerMissionObjectiveDTO> objectives;
    bool viewed;
    bool isNew;
    std::vector<MissionRequirementDTO> requirements;
    std::string internalName;
    std::string description;
    std::string displayType;
    std::string backgroundImageUrl;
    std::vector<PlayerMissionRewardDTO> rewards; 
  };
  void to_json(json& j, const PlayerMissionDTO& v) {
  j["helperText"] = v.helperText; 
  j["endTime"] = v.endTime; 
  j["locale"] = v.locale; 
  j["completedDate"] = v.completedDate; 
  j["id"] = v.id; 
  j["seriesName"] = v.seriesName; 
  j["cooldownTimeMillis"] = v.cooldownTimeMillis; 
  j["status"] = v.status; 
  j["completionExpression"] = v.completionExpression; 
  j["expiringWarnings"] = v.expiringWarnings; 
  j["celebrationType"] = v.celebrationType; 
  j["startTime"] = v.startTime; 
  j["title"] = v.title; 
  j["missionType"] = v.missionType; 
  j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp; 
  j["iconImageUrl"] = v.iconImageUrl; 
  j["objectives"] = v.objectives; 
  j["viewed"] = v.viewed; 
  j["isNew"] = v.isNew; 
  j["requirements"] = v.requirements; 
  j["internalName"] = v.internalName; 
  j["description"] = v.description; 
  j["displayType"] = v.displayType; 
  j["backgroundImageUrl"] = v.backgroundImageUrl; 
  j["rewards"] = v.rewards; 
  }
  void from_json(const json& j, PlayerMissionDTO& v) {
  v.helperText = j.at("helperText").get<std::string>(); 
  v.endTime = j.at("endTime").get<int64_t>(); 
  v.locale = j.at("locale").get<std::string>(); 
  v.completedDate = j.at("completedDate").get<int64_t>(); 
  v.id = j.at("id").get<std::string>(); 
  v.seriesName = j.at("seriesName").get<std::string>(); 
  v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>(); 
  v.status = j.at("status").get<std::string>(); 
  v.completionExpression = j.at("completionExpression").get<std::string>(); 
  v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO>>(); 
  v.celebrationType = j.at("celebrationType").get<std::string>(); 
  v.startTime = j.at("startTime").get<int64_t>(); 
  v.title = j.at("title").get<std::string>(); 
  v.missionType = j.at("missionType").get<std::string>(); 
  v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>(); 
  v.iconImageUrl = j.at("iconImageUrl").get<std::string>(); 
  v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO>>(); 
  v.viewed = j.at("viewed").get<bool>(); 
  v.isNew = j.at("isNew").get<bool>(); 
  v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO>>(); 
  v.internalName = j.at("internalName").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.displayType = j.at("displayType").get<std::string>(); 
  v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>(); 
  v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO>>(); 
  }
}