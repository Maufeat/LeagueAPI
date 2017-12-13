#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootContextMenu { 
    std::string essenceType;
    bool enabled;
    std::string requiredOthers;
    int32_t requiredOthersCount;
    std::string actionType;
    std::string name;
    int32_t essenceQuantity;
    std::string requiredTokens;
    std::string requiredOthersName; 
  };
  void to_json(json& j, const LolLootContextMenu& v) {
    j["essenceType"] = v.essenceType; 
    j["enabled"] = v.enabled; 
    j["requiredOthers"] = v.requiredOthers; 
    j["requiredOthersCount"] = v.requiredOthersCount; 
    j["actionType"] = v.actionType; 
    j["name"] = v.name; 
    j["essenceQuantity"] = v.essenceQuantity; 
    j["requiredTokens"] = v.requiredTokens; 
    j["requiredOthersName"] = v.requiredOthersName; 
  }
  void from_json(const json& j, LolLootContextMenu& v) {
    v.essenceType = j.at("essenceType").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.requiredOthers = j.at("requiredOthers").get<std::string>(); 
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>(); 
    v.requiredTokens = j.at("requiredTokens").get<std::string>(); 
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>(); 
  }
}