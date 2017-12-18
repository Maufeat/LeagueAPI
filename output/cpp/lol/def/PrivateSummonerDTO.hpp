#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PrivateSummonerDTO { 
    std::string previousSeasonHighestTier;
    bool nameChangeFlag;
    bool displayEloQuestionaire;
    std::string internalName;
    bool advancedTutorialFlag;
    uint64_t sumId;
    bool tutorialFlag;
    std::string name;
    int32_t profileIconId;
    uint64_t acctId; 
  };
  inline void to_json(json& j, const PrivateSummonerDTO& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
    j["displayEloQuestionaire"] = v.displayEloQuestionaire; 
    j["internalName"] = v.internalName; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["sumId"] = v.sumId; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["name"] = v.name; 
    j["profileIconId"] = v.profileIconId; 
    j["acctId"] = v.acctId; 
  }
  inline void from_json(const json& j, PrivateSummonerDTO& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
  }
}