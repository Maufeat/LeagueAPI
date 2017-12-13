#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PrivateSummonerDTO { 
    bool nameChangeFlag;
    uint64_t acctId;
    bool advancedTutorialFlag;
    std::string name;
    bool displayEloQuestionaire;
    int32_t profileIconId;
    std::string previousSeasonHighestTier;
    bool tutorialFlag;
    std::string internalName;
    uint64_t sumId; 
  };
  void to_json(json& j, const PrivateSummonerDTO& v) {
  j["nameChangeFlag"] = v.nameChangeFlag; 
  j["acctId"] = v.acctId; 
  j["advancedTutorialFlag"] = v.advancedTutorialFlag; 
  j["name"] = v.name; 
  j["displayEloQuestionaire"] = v.displayEloQuestionaire; 
  j["profileIconId"] = v.profileIconId; 
  j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
  j["tutorialFlag"] = v.tutorialFlag; 
  j["internalName"] = v.internalName; 
  j["sumId"] = v.sumId; 
  }
  void from_json(const json& j, PrivateSummonerDTO& v) {
  v.nameChangeFlag = j.at("nameChangeFlag").get<bool>(); 
  v.acctId = j.at("acctId").get<uint64_t>(); 
  v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>(); 
  v.name = j.at("name").get<std::string>(); 
  v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
  v.tutorialFlag = j.at("tutorialFlag").get<bool>(); 
  v.internalName = j.at("internalName").get<std::string>(); 
  v.sumId = j.at("sumId").get<uint64_t>(); 
  }
}