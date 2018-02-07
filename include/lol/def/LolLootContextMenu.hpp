#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootContextMenu { 
    std::string name;
    std::string actionType;
    bool enabled;
    std::string essenceType;
    int32_t essenceQuantity;
    std::string requiredTokens;
    std::string requiredOthers;
    std::string requiredOthersName;
    int32_t requiredOthersCount; 
  };
  inline void to_json(json& j, const LolLootContextMenu& v) {
    j["name"] = v.name; 
    j["actionType"] = v.actionType; 
    j["enabled"] = v.enabled; 
    j["essenceType"] = v.essenceType; 
    j["essenceQuantity"] = v.essenceQuantity; 
    j["requiredTokens"] = v.requiredTokens; 
    j["requiredOthers"] = v.requiredOthers; 
    j["requiredOthersName"] = v.requiredOthersName; 
    j["requiredOthersCount"] = v.requiredOthersCount; 
  }
  inline void from_json(const json& j, LolLootContextMenu& v) {
    v.name = j.at("name").get<std::string>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.essenceType = j.at("essenceType").get<std::string>(); 
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>(); 
    v.requiredTokens = j.at("requiredTokens").get<std::string>(); 
    v.requiredOthers = j.at("requiredOthers").get<std::string>(); 
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>(); 
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>(); 
  }
}