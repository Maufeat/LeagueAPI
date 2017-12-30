#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PrivateSummonerDTO { 
    std::string name;
    bool nameChangeFlag;
    bool tutorialFlag;
    bool advancedTutorialFlag;
    int32_t profileIconId;
    uint64_t sumId;
    std::string previousSeasonHighestTier;
    bool displayEloQuestionaire;
    std::string internalName;
    uint64_t acctId; 
  };
  inline void to_json(json& j, const PrivateSummonerDTO& v) {
    j["name"] = v.name; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["profileIconId"] = v.profileIconId; 
    j["sumId"] = v.sumId; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["displayEloQuestionaire"] = v.displayEloQuestionaire; 
    j["internalName"] = v.internalName; 
    j["acctId"] = v.acctId; 
  }
  inline void from_json(const json& j, PrivateSummonerDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
  }
}