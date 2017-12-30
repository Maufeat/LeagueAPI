#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChampSelectChampSelectAction.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PatchLolChampSelectV1SessionActionsById(T& _client, const uint64_t& id, const LolChampSelectChampSelectAction& data)
  {
    try {
      return ToResult<json>(_client.https.request("patch", "/lol-champ-select/v1/session/actions/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(data).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PatchLolChampSelectV1SessionActionsById(T& _client, const uint64_t& id, const LolChampSelectChampSelectAction& data, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-champ-select/v1/session/actions/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(data).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}