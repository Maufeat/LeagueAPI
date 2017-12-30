#pragma once
#include "../base_def.hpp" 
#include "LolLootLootRarity.hpp"
#include "LolLootLootType.hpp"
namespace lol {
  struct LolLootLootItemGdsResource { 
    std::string name;
    int32_t lifetimeMax;
    std::string id;
    int32_t mappedStoreId;
    LolLootLootRarity rarity;
    std::string image;
    std::string description;
    std::string endDate;
    bool autoRedeem;
    LolLootLootType type;
    std::string startDate; 
  };
  inline void to_json(json& j, const LolLootLootItemGdsResource& v) {
    j["name"] = v.name; 
    j["lifetimeMax"] = v.lifetimeMax; 
    j["id"] = v.id; 
    j["mappedStoreId"] = v.mappedStoreId; 
    j["rarity"] = v.rarity; 
    j["image"] = v.image; 
    j["description"] = v.description; 
    j["endDate"] = v.endDate; 
    j["autoRedeem"] = v.autoRedeem; 
    j["type"] = v.type; 
    j["startDate"] = v.startDate; 
  }
  inline void from_json(const json& j, LolLootLootItemGdsResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.lifetimeMax = j.at("lifetimeMax").get<int32_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.mappedStoreId = j.at("mappedStoreId").get<int32_t>(); 
    v.rarity = j.at("rarity").get<LolLootLootRarity>(); 
    v.image = j.at("image").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.autoRedeem = j.at("autoRedeem").get<bool>(); 
    v.type = j.at("type").get<LolLootLootType>(); 
    v.startDate = j.at("startDate").get<std::string>(); 
  }
}