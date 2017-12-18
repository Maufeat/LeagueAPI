#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectLegacyChampSelectMySelection.hpp"
namespace lol {
  inline Result<json> PatchLolChampSelectLegacyV1SessionMySelection(LeagueClient& _client, const LolChampSelectLegacyChampSelectMySelection& selection)
  {
    try {
      return Result<json> {
        _client.https.request("patch", "/lol-champ-select-legacy/v1/session/my-selection?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(selection).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PatchLolChampSelectLegacyV1SessionMySelection(LeagueClient& _client, const LolChampSelectLegacyChampSelectMySelection& selection, std::function<void(LeagueClient&,const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-champ-select-legacy/v1/session/my-selection?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(selection).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<json> { response });
          else
            cb(_client,Result<json> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}