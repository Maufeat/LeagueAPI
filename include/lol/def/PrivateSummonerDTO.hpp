#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PrivateSummonerDTO { 
    uint64_t sumId;
    uint64_t acctId;
    std::string name;
    std::string internalName;
    std::string previousSeasonHighestTier;
    int32_t profileIconId;
    bool tutorialFlag;
    bool advancedTutorialFlag;
    bool displayEloQuestionaire;
    bool nameChangeFlag; 
  };
  inline void to_json(json& j, const PrivateSummonerDTO& v) {
    j["sumId"] = v.sumId; 
    j["acctId"] = v.acctId; 
    j["name"] = v.name; 
    j["internalName"] = v.internalName; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["profileIconId"] = v.profileIconId; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["displayEloQuestionaire"] = v.displayEloQuestionaire; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
  }
  inline void from_json(const json& j, PrivateSummonerDTO& v) {
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
  }
}