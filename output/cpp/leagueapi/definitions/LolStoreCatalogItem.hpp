#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolStoreBundled.hpp>
#include <leagueapi/definitions/LolStoreItemKey.hpp>
#include <leagueapi/definitions/LolStoreItemCost.hpp>
#include <leagueapi/definitions/LolStoreSale.hpp>

namespace leagueapi {
  struct LolStoreCatalogItem { /**/ 
    int32_t itemId;/**/
    std::optional<LolStoreBundled> bundled;/**/
    std::optional<std::vector<std::string>> tags;/**/
    std::optional<std::string> releaseDate;/**/
    std::optional<std::string> inactiveDate;/**/
    std::optional<std::vector<LolStoreItemKey>> itemRequirements;/**/
    std::optional<std::vector<LolStoreItemCost>> prices;/**/
    std::string inventoryType;/**/
    std::optional<std::string> subInventoryType;/**/
    std::optional<LolStoreSale> sale;/**/
    std::optional<int32_t> maxQuantity;/**/
    std::optional<bool> active;/**/
    std::optional<std::string> itemInstanceId;/**/
  };
  static void to_json(json& j, const LolStoreCatalogItem& v) { 
    j["itemId"] = v.itemId;
    j["bundled"] = v.bundled;
    j["tags"] = v.tags;
    j["releaseDate"] = v.releaseDate;
    j["inactiveDate"] = v.inactiveDate;
    j["itemRequirements"] = v.itemRequirements;
    j["prices"] = v.prices;
    j["inventoryType"] = v.inventoryType;
    j["subInventoryType"] = v.subInventoryType;
    j["sale"] = v.sale;
    j["maxQuantity"] = v.maxQuantity;
    j["active"] = v.active;
    j["itemInstanceId"] = v.itemInstanceId;
  }
  static void from_json(const json& j, LolStoreCatalogItem& v) { 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.bundled = j.at("bundled").get<std::optional<LolStoreBundled>>(); 
    v.tags = j.at("tags").get<std::optional<std::vector<std::string>>>(); 
    v.releaseDate = j.at("releaseDate").get<std::optional<std::string>>(); 
    v.inactiveDate = j.at("inactiveDate").get<std::optional<std::string>>(); 
    v.itemRequirements = j.at("itemRequirements").get<std::optional<std::vector<LolStoreItemKey>>>(); 
    v.prices = j.at("prices").get<std::optional<std::vector<LolStoreItemCost>>>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.subInventoryType = j.at("subInventoryType").get<std::optional<std::string>>(); 
    v.sale = j.at("sale").get<std::optional<LolStoreSale>>(); 
    v.maxQuantity = j.at("maxQuantity").get<std::optional<int32_t>>(); 
    v.active = j.at("active").get<std::optional<bool>>(); 
    v.itemInstanceId = j.at("itemInstanceId").get<std::optional<std::string>>(); 
  }
} 