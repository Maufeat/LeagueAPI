#pragma once
#include "../base_def.hpp" 
#include "LolStoreItemKey.hpp"
#include "LolStoreSale.hpp"
#include "LolStoreBundled.hpp"
#include "LolStoreItemCost.hpp"
namespace lol {
  struct LolStoreCatalogItem { 
    std::optional<std::vector<LolStoreItemKey>> itemRequirements;
    std::optional<std::string> itemInstanceId;
    std::optional<std::vector<std::string>> tags;
    int32_t itemId;
    std::optional<int32_t> maxQuantity;
    std::optional<LolStoreBundled> bundled;
    std::optional<std::string> releaseDate;
    std::optional<std::string> inactiveDate;
    std::optional<bool> active;
    std::optional<LolStoreSale> sale;
    std::optional<std::string> subInventoryType;
    std::optional<std::vector<LolStoreItemCost>> prices;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolStoreCatalogItem& v) {
    if(v.itemRequirements)
      j["itemRequirements"] = *v.itemRequirements;
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    if(v.tags)
      j["tags"] = *v.tags;
    j["itemId"] = v.itemId; 
    if(v.maxQuantity)
      j["maxQuantity"] = *v.maxQuantity;
    if(v.bundled)
      j["bundled"] = *v.bundled;
    if(v.releaseDate)
      j["releaseDate"] = *v.releaseDate;
    if(v.inactiveDate)
      j["inactiveDate"] = *v.inactiveDate;
    if(v.active)
      j["active"] = *v.active;
    if(v.sale)
      j["sale"] = *v.sale;
    if(v.subInventoryType)
      j["subInventoryType"] = *v.subInventoryType;
    if(v.prices)
      j["prices"] = *v.prices;
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolStoreCatalogItem& v) {
    if(auto it = j.find("itemRequirements"); it != j.end() && !it->is_null())
      v.itemRequirements = it->get<std::optional<std::vector<LolStoreItemKey>>>(); 
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("tags"); it != j.end() && !it->is_null())
      v.tags = it->get<std::optional<std::vector<std::string>>>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    if(auto it = j.find("maxQuantity"); it != j.end() && !it->is_null())
      v.maxQuantity = it->get<std::optional<int32_t>>(); 
    if(auto it = j.find("bundled"); it != j.end() && !it->is_null())
      v.bundled = it->get<std::optional<LolStoreBundled>>(); 
    if(auto it = j.find("releaseDate"); it != j.end() && !it->is_null())
      v.releaseDate = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("inactiveDate"); it != j.end() && !it->is_null())
      v.inactiveDate = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("active"); it != j.end() && !it->is_null())
      v.active = it->get<std::optional<bool>>(); 
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<std::optional<LolStoreSale>>(); 
    if(auto it = j.find("subInventoryType"); it != j.end() && !it->is_null())
      v.subInventoryType = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("prices"); it != j.end() && !it->is_null())
      v.prices = it->get<std::optional<std::vector<LolStoreItemCost>>>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}