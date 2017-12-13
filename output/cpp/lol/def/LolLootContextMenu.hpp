#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootContextMenu { 
    int32_t requiredOthersCount;
    std::string requiredOthersName;
    std::string requiredTokens;
    std::string name;
    bool enabled;
    std::string actionType;
    std::string requiredOthers;
    std::string essenceType;
    int32_t essenceQuantity; 
  };
  void to_json(json& j, const LolLootContextMenu& v) {
  j["requiredOthersCount"] = v.requiredOthersCount; 
  j["requiredOthersName"] = v.requiredOthersName; 
  j["requiredTokens"] = v.requiredTokens; 
  j["name"] = v.name; 
  j["enabled"] = v.enabled; 
  j["actionType"] = v.actionType; 
  j["requiredOthers"] = v.requiredOthers; 
  j["essenceType"] = v.essenceType; 
  j["essenceQuantity"] = v.essenceQuantity; 
  }
  void from_json(const json& j, LolLootContextMenu& v) {
  v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>(); 
  v.requiredOthersName = j.at("requiredOthersName").get<std::string>(); 
  v.requiredTokens = j.at("requiredTokens").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.enabled = j.at("enabled").get<bool>(); 
  v.actionType = j.at("actionType").get<std::string>(); 
  v.requiredOthers = j.at("requiredOthers").get<std::string>(); 
  v.essenceType = j.at("essenceType").get<std::string>(); 
  v.essenceQuantity = j.at("essenceQuantity").get<int32_t>(); 
  }
}