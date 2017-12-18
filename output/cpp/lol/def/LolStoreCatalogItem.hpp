#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreSale.hpp>
#include <lol/def/LolStoreItemKey.hpp>
#include <lol/def/LolStoreBundled.hpp>
#include <lol/def/LolStoreItemCost.hpp>
namespace lol {
  struct LolStoreCatalogItem { 
    std::optional<std::string> itemInstanceId;
    std::optional<LolStoreSale> sale;
    std::optional<LolStoreBundled> bundled;
    std::optional<std::vector<std::string>> tags;
    std::optional<std::string> inactiveDate;
    std::optional<int32_t> maxQuantity;
    std::optional<std::string> subInventoryType;
    std::optional<bool> active;
    std::string inventoryType;
    int32_t itemId;
    std::optional<std::vector<LolStoreItemCost>> prices;
    std::optional<std::vector<LolStoreItemKey>> itemRequirements;
    std::optional<std::string> releaseDate; 
  };
  inline void to_json(json& j, const LolStoreCatalogItem& v) {
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    if(v.sale)
      j["sale"] = *v.sale;
    if(v.bundled)
      j["bundled"] = *v.bundled;
    if(v.tags)
      j["tags"] = *v.tags;
    if(v.inactiveDate)
      j["inactiveDate"] = *v.inactiveDate;
    if(v.maxQuantity)
      j["maxQuantity"] = *v.maxQuantity;
    if(v.subInventoryType)
      j["subInventoryType"] = *v.subInventoryType;
    if(v.active)
      j["active"] = *v.active;
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    if(v.prices)
      j["prices"] = *v.prices;
    if(v.itemRequirements)
      j["itemRequirements"] = *v.itemRequirements;
    if(v.releaseDate)
      j["releaseDate"] = *v.releaseDate;
  }
  inline void from_json(const json& j, LolStoreCatalogItem& v) {
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<std::optional<LolStoreSale>>(); 
    if(auto it = j.find("bundled"); it != j.end() && !it->is_null())
      v.bundled = it->get<std::optional<LolStoreBundled>>(); 
    if(auto it = j.find("tags"); it != j.end() && !it->is_null())
      v.tags = it->get<std::optional<std::vector<std::string>>>(); 
    if(auto it = j.find("inactiveDate"); it != j.end() && !it->is_null())
      v.inactiveDate = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("maxQuantity"); it != j.end() && !it->is_null())
      v.maxQuantity = it->get<std::optional<int32_t>>(); 
    if(auto it = j.find("subInventoryType"); it != j.end() && !it->is_null())
      v.subInventoryType = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("active"); it != j.end() && !it->is_null())
      v.active = it->get<std::optional<bool>>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    if(auto it = j.find("prices"); it != j.end() && !it->is_null())
      v.prices = it->get<std::optional<std::vector<LolStoreItemCost>>>(); 
    if(auto it = j.find("itemRequirements"); it != j.end() && !it->is_null())
      v.itemRequirements = it->get<std::optional<std::vector<LolStoreItemKey>>>(); 
    if(auto it = j.find("releaseDate"); it != j.end() && !it->is_null())
      v.releaseDate = it->get<std::optional<std::string>>(); 
  }
}