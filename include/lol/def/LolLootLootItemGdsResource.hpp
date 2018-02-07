#pragma once
#include "../base_def.hpp" 
#include "LolLootLootType.hpp"
#include "LolLootLootRarity.hpp"
namespace lol {
  struct LolLootLootItemGdsResource { 
    std::string id;
    std::string name;
    std::string description;
    std::string image;
    std::string startDate;
    std::string endDate;
    int32_t mappedStoreId;
    int32_t lifetimeMax;
    bool autoRedeem;
    LolLootLootRarity rarity;
    LolLootLootType type; 
  };
  inline void to_json(json& j, const LolLootLootItemGdsResource& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["description"] = v.description; 
    j["image"] = v.image; 
    j["startDate"] = v.startDate; 
    j["endDate"] = v.endDate; 
    j["mappedStoreId"] = v.mappedStoreId; 
    j["lifetimeMax"] = v.lifetimeMax; 
    j["autoRedeem"] = v.autoRedeem; 
    j["rarity"] = v.rarity; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, LolLootLootItemGdsResource& v) {
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.image = j.at("image").get<std::string>(); 
    v.startDate = j.at("startDate").get<std::string>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>(); 
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>(); 
    v.autoRedeem = j.at("autoRedeem").get<bool>(); 
    v.rarity = j.at("rarity").get<LolLootLootRarity>(); 
    v.type = j.at("type").get<LolLootLootType>(); 
  }
}