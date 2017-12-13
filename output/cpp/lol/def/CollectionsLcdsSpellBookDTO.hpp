#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsSpellBookPageDTO.hpp>
namespace lol {
  struct CollectionsLcdsSpellBookDTO { 
    std::vector<CollectionsLcdsSpellBookPageDTO> bookPages;
    uint64_t summonerId;
    std::string dateString; 
  };
  void to_json(json& j, const CollectionsLcdsSpellBookDTO& v) {
  j["bookPages"] = v.bookPages; 
  j["summonerId"] = v.summonerId; 
  j["dateString"] = v.dateString; 
  }
  void from_json(const json& j, CollectionsLcdsSpellBookDTO& v) {
  v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsSpellBookPageDTO>>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.dateString = j.at("dateString").get<std::string>(); 
  }
}