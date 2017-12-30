#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootContextMenu { 
    std::string name;
    std::string requiredTokens;
    std::string requiredOthersName;
    std::string essenceType;
    int32_t essenceQuantity;
    bool enabled;
    int32_t requiredOthersCount;
    std::string actionType;
    std::string requiredOthers; 
  };
  inline void to_json(json& j, const LolLootContextMenu& v) {
    j["name"] = v.name; 
    j["requiredTokens"] = v.requiredTokens; 
    j["requiredOthersName"] = v.requiredOthersName; 
    j["essenceType"] = v.essenceType; 
    j["essenceQuantity"] = v.essenceQuantity; 
    j["enabled"] = v.enabled; 
    j["requiredOthersCount"] = v.requiredOthersCount; 
    j["actionType"] = v.actionType; 
    j["requiredOthers"] = v.requiredOthers; 
  }
  inline void from_json(const json& j, LolLootContextMenu& v) {
    v.name = j.at("name").get<std::string>(); 
    v.requiredTokens = j.at("requiredTokens").get<std::string>(); 
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>(); 
    v.essenceType = j.at("essenceType").get<std::string>(); 
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.requiredOthers = j.at("requiredOthers").get<std::string>(); 
  }
}