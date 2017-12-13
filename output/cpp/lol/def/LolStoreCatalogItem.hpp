#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolStoreBundled.hpp>
#include <lol/def/LolStoreItemCost.hpp>
#include <lol/def/LolStoreItemKey.hpp>
#include <lol/def/LolStoreSale.hpp>
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
  void to_json(json& j, const LolStoreCatalogItem& v) {
  j["itemInstanceId"] = v.itemInstanceId; 
  j["sale"] = v.sale; 
  j["bundled"] = v.bundled; 
  j["tags"] = v.tags; 
  j["inactiveDate"] = v.inactiveDate; 
  j["maxQuantity"] = v.maxQuantity; 
  j["subInventoryType"] = v.subInventoryType; 
  j["active"] = v.active; 
  j["inventoryType"] = v.inventoryType; 
  j["itemId"] = v.itemId; 
  j["prices"] = v.prices; 
  j["itemRequirements"] = v.itemRequirements; 
  j["releaseDate"] = v.releaseDate; 
  }
  void from_json(const json& j, LolStoreCatalogItem& v) {
  v.itemInstanceId = j.at("itemInstanceId").get<std::optional<std::string>>(); 
  v.sale = j.at("sale").get<std::optional<LolStoreSale>>(); 
  v.bundled = j.at("bundled").get<std::optional<LolStoreBundled>>(); 
  v.tags = j.at("tags").get<std::optional<std::vector<std::string>>>(); 
  v.inactiveDate = j.at("inactiveDate").get<std::optional<std::string>>(); 
  v.maxQuantity = j.at("maxQuantity").get<std::optional<int32_t>>(); 
  v.subInventoryType = j.at("subInventoryType").get<std::optional<std::string>>(); 
  v.active = j.at("active").get<std::optional<bool>>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.prices = j.at("prices").get<std::optional<std::vector<LolStoreItemCost>>>(); 
  v.itemRequirements = j.at("itemRequirements").get<std::optional<std::vector<LolStoreItemKey>>>(); 
  v.releaseDate = j.at("releaseDate").get<std::optional<std::string>>(); 
  }
}