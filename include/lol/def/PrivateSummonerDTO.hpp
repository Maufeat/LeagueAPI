#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PrivateSummonerDTO { 
    bool displayEloQuestionaire;
    uint64_t acctId;
    bool tutorialFlag;
    bool nameChangeFlag;
    std::string previousSeasonHighestTier;
    std::string name;
    uint64_t sumId;
    int32_t profileIconId;
    bool advancedTutorialFlag;
    std::string internalName; 
  };
  inline void to_json(json& j, const PrivateSummonerDTO& v) {
    j["displayEloQuestionaire"] = v.displayEloQuestionaire; 
    j["acctId"] = v.acctId; 
    j["tutorialFlag"] = v.tutorialFlag; 
    j["nameChangeFlag"] = v.nameChangeFlag; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["name"] = v.name; 
    j["sumId"] = v.sumId; 
    j["profileIconId"] = v.profileIconId; 
    j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
    j["internalName"] = v.internalName; 
  }
  inline void from_json(const json& j, PrivateSummonerDTO& v) {
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
  }
}